
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge {int fl_align; scalar_t__ pktshift; } ;
struct adapter {struct sge sge; } ;


 unsigned int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline unsigned int FUNC_1(struct adapter *VAR_2,
       unsigned int VAR_3)
{
 struct sge *VAR_4 = &VAR_2->sge;

 return FUNC_0(VAR_4->pktshift + VAR_0 + VAR_1 + VAR_3, VAR_4->fl_align);
}
