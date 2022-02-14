
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lp8727_chg {int xfer_lock; int client; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct lp8727_chg *VAR_0, u8 VAR_1, u8 VAR_2)
{
 int VAR_3;

 FUNC_1(&VAR_0->xfer_lock);
 VAR_3 = FUNC_0(VAR_0->client, VAR_1, VAR_2);
 FUNC_2(&VAR_0->xfer_lock);

 return VAR_3;
}
