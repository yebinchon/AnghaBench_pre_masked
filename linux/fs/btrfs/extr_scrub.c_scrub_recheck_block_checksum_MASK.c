
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scrub_block {TYPE_1__** pagev; scalar_t__ generation_error; scalar_t__ checksum_error; scalar_t__ header_error; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct scrub_block*) ;
 int FUNC_1 (struct scrub_block*) ;

__attribute__((used)) static void FUNC_2(struct scrub_block *VAR_1)
{
 VAR_1->header_error = 0;
 VAR_1->checksum_error = 0;
 VAR_1->generation_error = 0;

 if (VAR_1->pagev[0]->flags & VAR_0)
  FUNC_0(VAR_1);
 else
  FUNC_1(VAR_1);
}
