
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wcn36xx {scalar_t__ fw_major; scalar_t__ fw_minor; scalar_t__ fw_version; scalar_t__ fw_revision; } ;



__attribute__((used)) static inline bool FUNC_0(struct wcn36xx *VAR_0,
      u8 VAR_1,
      u8 VAR_2,
      u8 VAR_3,
      u8 VAR_4)
{
 return (VAR_0->fw_major == VAR_1 &&
  VAR_0->fw_minor == VAR_2 &&
  VAR_0->fw_version == VAR_3 &&
  VAR_0->fw_revision == VAR_4);
}
