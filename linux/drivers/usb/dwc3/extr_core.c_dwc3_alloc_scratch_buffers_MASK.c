
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3 {int scratchbuf; int nr_scratch; int has_hibernation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct dwc3 *VAR_3)
{
 if (!VAR_3->has_hibernation)
  return 0;

 if (!VAR_3->nr_scratch)
  return 0;

 VAR_3->scratchbuf = FUNC_0(VAR_3->nr_scratch,
   VAR_0, VAR_2);
 if (!VAR_3->scratchbuf)
  return -VAR_1;

 return 0;
}
