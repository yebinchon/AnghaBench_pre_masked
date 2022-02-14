
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct rave_sp {int serdev; TYPE_1__* variant; } ;
typedef int frame ;
typedef int crc ;
struct TYPE_4__ {size_t length; int (* subroutine ) (int const*,int,unsigned char*) ;} ;
struct TYPE_3__ {TYPE_2__* checksum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int,int,unsigned char*,size_t,int) ;
 int FUNC_2 (int ,unsigned char*,size_t,int ) ;
 int FUNC_3 (int const*,int,unsigned char*) ;
 unsigned char* FUNC_4 (unsigned char*,...) ;

__attribute__((used)) static int FUNC_5(struct rave_sp *VAR_7, const u8 *VAR_8, u8 VAR_9)
{
 const size_t VAR_10 = VAR_7->variant->checksum->length;
 unsigned char VAR_11[VAR_6];
 unsigned char VAR_12[VAR_3];
 unsigned char *VAR_13 = VAR_11;
 size_t VAR_14;

 if (FUNC_0(VAR_10 > sizeof(VAR_12)))
  return -VAR_1;

 if (FUNC_0(VAR_9 > sizeof(VAR_11)))
  return -VAR_1;

 VAR_7->variant->checksum->subroutine(VAR_8, VAR_9, VAR_12);

 *VAR_13++ = VAR_5;
 VAR_13 = FUNC_4(VAR_13, VAR_8, VAR_9);
 VAR_13 = FUNC_4(VAR_13, VAR_12, VAR_10);
 *VAR_13++ = VAR_4;

 VAR_14 = VAR_13 - VAR_11;

 FUNC_1("rave-sp tx: ", VAR_0,
        16, 1, VAR_11, VAR_14, 0);

 return FUNC_2(VAR_7->serdev, VAR_11, VAR_14, VAR_2);
}
