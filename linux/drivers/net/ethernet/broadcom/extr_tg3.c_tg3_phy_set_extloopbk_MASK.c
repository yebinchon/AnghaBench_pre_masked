
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int phy_flags; int phy_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct tg3*,int ,int*) ;
 int FUNC_1 (struct tg3*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct tg3 *VAR_5)
{
 int VAR_6;
 u32 VAR_7;

 if (VAR_5->phy_flags & VAR_2)
  return 0;

 if ((VAR_5->phy_id & VAR_4) == VAR_3) {

  VAR_6 = FUNC_1(VAR_5,
        VAR_1,
        VAR_0 |
        0x4c20);
  goto done;
 }

 VAR_6 = FUNC_0(VAR_5,
      VAR_1, &VAR_7);
 if (VAR_6)
  return VAR_6;

 VAR_7 |= VAR_0;
 VAR_6 = FUNC_1(VAR_5,
       VAR_1, VAR_7);

done:
 return VAR_6;
}
