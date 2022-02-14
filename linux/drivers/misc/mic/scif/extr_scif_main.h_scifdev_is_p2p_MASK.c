
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scif_dev {int dummy; } ;


 size_t VAR_0 ;
 struct scif_dev* VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct scif_dev*) ;

__attribute__((used)) static inline bool FUNC_2(struct scif_dev *VAR_2)
{
 if (FUNC_0())
  return 0;
 else
  return VAR_2 != &VAR_1[VAR_0] &&
   !FUNC_1(VAR_2);
}
