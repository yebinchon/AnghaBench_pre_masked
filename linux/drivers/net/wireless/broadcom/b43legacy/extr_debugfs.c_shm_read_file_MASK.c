
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int tmp ;
struct b43legacy_wldev {int dummy; } ;
typedef int ssize_t ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (struct b43legacy_wldev*,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct b43legacy_wldev *VAR_1, char *VAR_2, size_t VAR_3)
{
 ssize_t VAR_4 = 0;
 int VAR_5;
 u16 VAR_6;
 __le16 *VAR_7 = (__le16 *)VAR_2;

 for (VAR_5 = 0; VAR_5 < 0x1000; VAR_5++) {
  if (VAR_3 < sizeof(VAR_6))
   break;
  VAR_6 = FUNC_0(VAR_1, VAR_0, 2 * VAR_5);
  VAR_7[VAR_5] = FUNC_1(VAR_6);
  VAR_4 += sizeof(VAR_6);
  VAR_3 -= sizeof(VAR_6);
 }

 return VAR_4;
}
