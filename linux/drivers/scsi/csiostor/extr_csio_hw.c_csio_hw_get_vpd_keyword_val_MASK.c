
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct t4_vpd_hdr {scalar_t__ id_tag; scalar_t__ vpdr_tag; } ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__ const*,char const*,int) ;

__attribute__((used)) static int
FUNC_1(const struct t4_vpd_hdr *VAR_3, const char *VAR_4)
{
 int32_t VAR_5;
 int32_t VAR_6 , VAR_7;
 const uint8_t *VAR_8 = &VAR_3->id_tag;
 const uint8_t *VAR_9 = &VAR_3->vpdr_tag;
 VAR_6 = sizeof(struct t4_vpd_hdr);
 VAR_7 = (uint16_t)VAR_9[1] + ((uint16_t)VAR_9[2] << 8);

 if (VAR_7 + sizeof(struct t4_vpd_hdr) > VAR_2)
  return -VAR_0;

 for (VAR_5 = VAR_6; (VAR_5 + VAR_1) <= (VAR_6 + VAR_7);) {
  if (FUNC_0(VAR_8 + VAR_5 , VAR_4, 2) == 0) {
   VAR_5 += VAR_1;
   return VAR_5;
  }

  VAR_5 += VAR_1 + VAR_8[VAR_5+2];
 }

 return -VAR_0;
}
