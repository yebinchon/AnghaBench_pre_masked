
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct smt_entry {int refcnt; int lock; int src_mac; int pfvf; int state; } ;
struct smt_data {int lock; } ;
struct adapter {struct smt_data* smt; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct smt_entry* FUNC_0 (struct smt_data*,int *) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct adapter*,struct smt_entry*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct smt_entry *FUNC_7(struct adapter *VAR_2, u16 VAR_3,
      u8 *VAR_4)
{
 struct smt_data *VAR_5 = VAR_2->smt;
 struct smt_entry *VAR_6;

 FUNC_4(&VAR_5->lock);
 VAR_6 = FUNC_0(VAR_5, VAR_4);
 if (VAR_6) {
  FUNC_2(&VAR_6->lock);
  if (!VAR_6->refcnt) {
   VAR_6->refcnt = 1;
   VAR_6->state = VAR_1;
   VAR_6->pfvf = VAR_3;
   FUNC_1(VAR_6->src_mac, VAR_4, VAR_0);
   FUNC_5(VAR_2, VAR_6);
  } else {
   ++VAR_6->refcnt;
  }
  FUNC_3(&VAR_6->lock);
 }
 FUNC_6(&VAR_5->lock);
 return VAR_6;
}
