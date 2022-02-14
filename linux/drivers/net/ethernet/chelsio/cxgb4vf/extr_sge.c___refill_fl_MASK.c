
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_fl {scalar_t__ avail; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct sge_fl*) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (struct adapter*,struct sge_fl*,int ,int ) ;

__attribute__((used)) static inline void FUNC_3(struct adapter *VAR_2, struct sge_fl *VAR_3)
{
 FUNC_2(VAR_2, VAR_3,
    FUNC_1((unsigned int)VAR_1, FUNC_0(VAR_3) - VAR_3->avail),
    VAR_0);
}
