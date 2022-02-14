
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct lp8727_chg {int xfer_lock; int client; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct lp8727_chg *VAR_1, u8 VAR_2, u8 *VAR_3, u8 VAR_4)
{
 s32 VAR_5;

 FUNC_1(&VAR_1->xfer_lock);
 VAR_5 = FUNC_0(VAR_1->client, VAR_2, VAR_4, VAR_3);
 FUNC_2(&VAR_1->xfer_lock);

 return (VAR_5 != VAR_4) ? -VAR_0 : 0;
}
