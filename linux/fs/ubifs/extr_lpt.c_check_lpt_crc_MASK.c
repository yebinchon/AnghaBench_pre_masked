
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct ubifs_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,void*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct ubifs_info const*,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (struct ubifs_info const*,int **,int*,int ) ;

__attribute__((used)) static int FUNC_4(const struct ubifs_info *VAR_3, void *VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 uint8_t *VAR_7 = VAR_4;
 uint16_t VAR_8, VAR_9;

 VAR_8 = FUNC_3(VAR_3, &VAR_7, &VAR_6, VAR_1);
 VAR_9 = FUNC_0(-1, VAR_4 + VAR_2,
    VAR_5 - VAR_2);
 if (VAR_8 != VAR_9) {
  FUNC_2(VAR_3, "invalid crc in LPT node: crc %hx calc %hx",
     VAR_8, VAR_9);
  FUNC_1();
  return -VAR_0;
 }
 return 0;
}
