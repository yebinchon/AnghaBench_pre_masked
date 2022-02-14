
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct mtd_info {int dummy; } ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mtd_info*,size_t,int,size_t*,int *) ;
 int FUNC_2 (char*,size_t,int) ;

__attribute__((used)) static const char *FUNC_3(struct mtd_info *VAR_1,
          size_t VAR_2)
{
 uint32_t VAR_3;
 size_t VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_2, sizeof(VAR_3), &VAR_4,
   (uint8_t *)&VAR_3);
 if (VAR_5 && !FUNC_0(VAR_5)) {
  FUNC_2("mtd_read error while parsing (offset: 0x%zX): %d\n",
   VAR_2, VAR_5);
  goto out_default;
 }

 if (VAR_3 == VAR_0)
  return "ubi";

out_default:
 return "rootfs";
}
