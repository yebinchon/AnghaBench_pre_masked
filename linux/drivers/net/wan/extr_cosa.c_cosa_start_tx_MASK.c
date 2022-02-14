
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cosa_data {int txbitmap; int lock; int num; } ;
struct channel_data {char* txbuf; int txsize; int num; struct cosa_data* cosa; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ,int ,int) ;
 int FUNC_2 (struct cosa_data*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct channel_data *VAR_1, char *VAR_2, int VAR_3)
{
 struct cosa_data *VAR_4 = VAR_1->cosa;
 unsigned long VAR_5;
 FUNC_4(&VAR_4->lock, VAR_5);
 VAR_1->txbuf = VAR_2;
 VAR_1->txsize = VAR_3;
 if (VAR_3 > VAR_0)
  VAR_1->txsize = VAR_0;
 FUNC_5(&VAR_4->lock, VAR_5);


 FUNC_3(VAR_1->num, &VAR_4->txbitmap);
 FUNC_2(VAR_4);

 return 0;
}
