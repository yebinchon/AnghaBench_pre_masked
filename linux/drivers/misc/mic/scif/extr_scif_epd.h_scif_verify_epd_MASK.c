
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scif_endpt {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct scif_endpt*) ;

__attribute__((used)) static inline int FUNC_1(struct scif_endpt *VAR_5)
{
 if (VAR_5->state == VAR_4)
  return -VAR_0;

 if (VAR_5->state != VAR_3)
  return -VAR_2;

 if (!FUNC_0(VAR_5))
  return -VAR_1;

 return 0;
}
