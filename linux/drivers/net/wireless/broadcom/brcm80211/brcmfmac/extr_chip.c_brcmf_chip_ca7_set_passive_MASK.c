
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_core {int dummy; } ;
struct brcmf_chip_priv {int pub; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct brcmf_chip_priv*,int ) ;
 struct brcmf_core* FUNC_1 (int *,int ) ;
 int FUNC_2 (struct brcmf_core*,int,int,int) ;

__attribute__((used)) static inline void
FUNC_3(struct brcmf_chip_priv *VAR_4)
{
 struct brcmf_core *VAR_5;

 FUNC_0(VAR_4, VAR_1);

 VAR_5 = FUNC_1(&VAR_4->pub, VAR_0);
 FUNC_2(VAR_5, VAR_3 |
       VAR_2,
        VAR_2,
        VAR_2);
}
