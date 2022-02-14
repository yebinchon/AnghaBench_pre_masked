
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hdr_format; } ;
struct b43_wldev {TYPE_1__ fw; } ;
struct b43_plcp_hdr6 {int dummy; } ;






__attribute__((used)) static inline
size_t FUNC_0(struct b43_wldev *VAR_0)
{
 switch (VAR_0->fw.hdr_format) {
 case 128:
  return 112 + sizeof(struct b43_plcp_hdr6);
 case 129:
  return 104 + sizeof(struct b43_plcp_hdr6);
 case 130:
  return 100 + sizeof(struct b43_plcp_hdr6);
 }
 return 0;
}
