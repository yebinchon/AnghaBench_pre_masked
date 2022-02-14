
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wl1271 {int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct wl1271*,int,int,int,int ) ;

__attribute__((used)) static int FUNC_1(struct wl1271 *VAR_8, u32 VAR_9)
{
 int VAR_10;
 u32 VAR_11 = 0;
 u32 VAR_12 = VAR_1 |
         VAR_0;


 if (VAR_8->quirks & VAR_7) {
  VAR_12 |= VAR_3;
  VAR_11 = VAR_4;
 }


 if (VAR_8->quirks & VAR_6) {
  VAR_12 |= VAR_2;
  VAR_11 = VAR_4;
 }

 VAR_10 = FUNC_0(VAR_8, VAR_12,
         VAR_11, VAR_9,
         VAR_5);
 if (VAR_10 < 0)
  return VAR_10;

 return 0;
}
