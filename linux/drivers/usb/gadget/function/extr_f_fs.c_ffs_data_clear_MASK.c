
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffs_data {int stringtabs; int raw_strings; int raw_descs_data; scalar_t__ ffs_eventfd; int eps_count; scalar_t__ epfiles; int gadget; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct ffs_data*) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct ffs_data *VAR_0)
{
 FUNC_1();

 FUNC_3(VAR_0);

 FUNC_0(VAR_0->gadget);

 if (VAR_0->epfiles)
  FUNC_4(VAR_0->epfiles, VAR_0->eps_count);

 if (VAR_0->ffs_eventfd)
  FUNC_2(VAR_0->ffs_eventfd);

 FUNC_5(VAR_0->raw_descs_data);
 FUNC_5(VAR_0->raw_strings);
 FUNC_5(VAR_0->stringtabs);
}
