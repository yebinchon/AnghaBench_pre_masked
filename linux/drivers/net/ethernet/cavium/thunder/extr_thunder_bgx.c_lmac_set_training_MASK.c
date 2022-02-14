
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lmac {scalar_t__ lmac_type; int use_training; } ;
struct bgx {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bgx*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct bgx *VAR_4, struct lmac *VAR_5, int VAR_6)
{
 if ((VAR_5->lmac_type != VAR_0) &&
     (VAR_5->lmac_type != VAR_1)) {
  VAR_5->use_training = 0;
  return;
 }

 VAR_5->use_training = FUNC_0(VAR_4, VAR_6, VAR_2) &
       VAR_3;
}
