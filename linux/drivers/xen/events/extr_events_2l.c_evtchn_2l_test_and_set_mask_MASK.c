
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shared_info {int * evtchn_mask; } ;


 int FUNC_0 (int *) ;
 struct shared_info* VAR_0 ;
 int FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static bool FUNC_2(unsigned VAR_1)
{
 struct shared_info *VAR_2 = VAR_0;
 return FUNC_1(VAR_1, FUNC_0(&VAR_2->evtchn_mask[0]));
}
