
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dev_data {int fasync; int wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2 (struct dev_data *VAR_2)
{
 FUNC_1 (&VAR_2->wait);
 FUNC_0 (&VAR_2->fasync, VAR_1, VAR_0);
}
