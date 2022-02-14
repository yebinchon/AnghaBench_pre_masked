
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct uea_softc {int dummy; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct uea_softc*) ;
 int FUNC_2 (struct uea_softc*,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static inline int FUNC_4(struct uea_softc *VAR_2,
  u8 VAR_3, u16 VAR_4, u16 VAR_5, u16 VAR_6, u32 VAR_7)
{
 int VAR_8 = FUNC_2(VAR_2, FUNC_0(VAR_0,
       VAR_1, VAR_3),
     VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_8 < 0)
  FUNC_3(FUNC_1(VAR_2),
   "writing cmv failed with error %d\n", VAR_8);

 return VAR_8;
}
