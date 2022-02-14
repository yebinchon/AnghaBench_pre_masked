
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {void* txpower_max; void* txpower_min; void* txpower_cur; int current_addr; } ;
typedef void* s16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct lbs_private*,void**,void**,void**) ;
 int FUNC_2 (struct lbs_private*) ;
 int FUNC_3 (struct lbs_private*,int ,int) ;
 int FUNC_4 (struct lbs_private*) ;

__attribute__((used)) static int FUNC_5(struct lbs_private *VAR_1)
{
 int VAR_2 = -1;
 s16 VAR_3 = 0, VAR_4 = 0, VAR_5 = 0;


 FUNC_0(VAR_1->current_addr);
 VAR_2 = FUNC_4(VAR_1);
 if (VAR_2)
  goto done;


 VAR_2 = FUNC_1(VAR_1, &VAR_3, &VAR_4, &VAR_5);
 if (VAR_2 == 0) {
  VAR_1->txpower_cur = VAR_3;
  VAR_1->txpower_min = VAR_4;
  VAR_1->txpower_max = VAR_5;
 }


 VAR_2 = FUNC_3(VAR_1, VAR_0, 1);
 if (VAR_2)
  goto done;

 VAR_2 = FUNC_2(VAR_1);
done:
 return VAR_2;
}
