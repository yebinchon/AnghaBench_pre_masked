
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ count; } ;
struct ffs_data {scalar_t__ flags; int setup_state; int state; TYPE_1__ ev; scalar_t__ eps_count; scalar_t__ interfaces_count; scalar_t__ strings_count; scalar_t__ ss_descs_count; scalar_t__ hs_descs_count; scalar_t__ fs_descs_count; scalar_t__ raw_descs_length; int * stringtabs; int * raw_strings; int * raw_descs; int * raw_descs_data; int * epfiles; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ffs_data*) ;

__attribute__((used)) static void FUNC_2(struct ffs_data *VAR_2)
{
 FUNC_0();

 FUNC_1(VAR_2);

 VAR_2->epfiles = ((void*)0);
 VAR_2->raw_descs_data = ((void*)0);
 VAR_2->raw_descs = ((void*)0);
 VAR_2->raw_strings = ((void*)0);
 VAR_2->stringtabs = ((void*)0);

 VAR_2->raw_descs_length = 0;
 VAR_2->fs_descs_count = 0;
 VAR_2->hs_descs_count = 0;
 VAR_2->ss_descs_count = 0;

 VAR_2->strings_count = 0;
 VAR_2->interfaces_count = 0;
 VAR_2->eps_count = 0;

 VAR_2->ev.count = 0;

 VAR_2->state = VAR_1;
 VAR_2->setup_state = VAR_0;
 VAR_2->flags = 0;
}
