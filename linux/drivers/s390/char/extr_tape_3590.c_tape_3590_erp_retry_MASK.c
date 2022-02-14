
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_request {size_t op; } ;
struct tape_device {int dummy; } ;
struct irb {int dummy; } ;


 int FUNC_0 (int,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct tape_device*,struct tape_request*,struct irb*) ;
 int * VAR_1 ;

__attribute__((used)) static inline int
FUNC_2(struct tape_device *VAR_2, struct tape_request *VAR_3,
      struct irb *VAR_4)
{
 FUNC_0(2, "Retry: %s\n", VAR_1[VAR_3->op]);
 FUNC_1(VAR_2, VAR_3, VAR_4);
 return VAR_0;
}
