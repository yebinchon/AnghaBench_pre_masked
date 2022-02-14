
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int post_handler; int pre_handler; int symbol_name; } ;
struct fei_attr {int list; int retval; TYPE_1__ kp; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (unsigned long,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct fei_attr*) ;
 int FUNC_3 (char const*,int ) ;
 struct fei_attr* FUNC_4 (int,int ) ;

__attribute__((used)) static struct fei_attr *FUNC_5(const char *VAR_3, unsigned long VAR_4)
{
 struct fei_attr *VAR_5;

 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_0);
 if (VAR_5) {
  VAR_5->kp.symbol_name = FUNC_3(VAR_3, VAR_0);
  if (!VAR_5->kp.symbol_name) {
   FUNC_2(VAR_5);
   return ((void*)0);
  }
  VAR_5->kp.pre_handler = VAR_1;
  VAR_5->kp.post_handler = VAR_2;
  VAR_5->retval = FUNC_1(VAR_4, 0);
  FUNC_0(&VAR_5->list);
 }
 return VAR_5;
}
