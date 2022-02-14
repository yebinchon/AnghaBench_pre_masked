
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {unsigned int args_count; int * args; int np; } ;
struct fwnode_reference_args {unsigned int nargs; int * args; int fwnode; } ;
struct fwnode_handle {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*,char const*,unsigned int,struct of_phandle_args*) ;
 int FUNC_2 (int ,char const*,unsigned int,unsigned int,struct of_phandle_args*) ;
 int FUNC_3 (struct fwnode_handle const*) ;

__attribute__((used)) static int
FUNC_4(const struct fwnode_handle *VAR_1,
        const char *VAR_2, const char *VAR_3,
        unsigned int VAR_4, unsigned int VAR_5,
        struct fwnode_reference_args *VAR_6)
{
 struct of_phandle_args VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 if (VAR_3)
  VAR_9 = FUNC_1(FUNC_3(VAR_1), VAR_2,
       VAR_3, VAR_5, &VAR_7);
 else
  VAR_9 = FUNC_2(FUNC_3(VAR_1), VAR_2,
             VAR_4, VAR_5, &VAR_7);
 if (VAR_9 < 0)
  return VAR_9;
 if (!VAR_6)
  return 0;

 VAR_6->nargs = VAR_7.args_count;
 VAR_6->fwnode = FUNC_0(VAR_7.np);

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
  VAR_6->args[VAR_8] = VAR_8 < VAR_7.args_count ? VAR_7.args[VAR_8] : 0;

 return 0;
}
