
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lmac {int lmacid; } ;
struct bgx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bgx*,int ,int ) ;

__attribute__((used)) static u8 FUNC_1(struct bgx *VAR_1, struct lmac *VAR_2)
{
 return (u8)(FUNC_0(VAR_1, VAR_2->lmacid, VAR_0) & 0xFF);
}
