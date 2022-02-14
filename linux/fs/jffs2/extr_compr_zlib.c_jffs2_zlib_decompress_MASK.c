
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {unsigned char* next_in; int avail_in; unsigned char* next_out; int avail_out; scalar_t__ total_out; scalar_t__ total_in; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_8(unsigned char *VAR_8,
     unsigned char *VAR_9,
     uint32_t VAR_10, uint32_t VAR_11)
{
 int VAR_12;
 int VAR_13 = VAR_0;

 FUNC_1(&VAR_7);

 VAR_6.next_in = VAR_8;
 VAR_6.avail_in = VAR_10;
 VAR_6.total_in = 0;

 VAR_6.next_out = VAR_9;
 VAR_6.avail_out = VAR_11;
 VAR_6.total_out = 0;



 if (VAR_10 > 2 && !(VAR_8[1] & VAR_1) &&
     ((VAR_8[0] & 0x0f) == VAR_2) &&
     !(((VAR_8[0]<<8) + VAR_8[1]) % 31)) {

  FUNC_0(2, "inflate skipping adler32\n");
  VAR_13 = -((VAR_8[0] >> 4) + 8);
  VAR_6.next_in += 2;
  VAR_6.avail_in -= 2;
 } else {

  FUNC_0(1, "inflate not skipping adler32\n");
 }


 if (VAR_4 != FUNC_7(&VAR_6, VAR_13)) {
  FUNC_4("inflateInit failed\n");
  FUNC_2(&VAR_7);
  return 1;
 }

 while((VAR_12 = FUNC_5(&VAR_6, VAR_3)) == VAR_4)
  ;
 if (VAR_12 != VAR_5) {
  FUNC_3("inflate returned %d\n", VAR_12);
 }
 FUNC_6(&VAR_6);
 FUNC_2(&VAR_7);
 return 0;
}
