
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct metapage {int wait; int * log; scalar_t__ clsn; int * data; scalar_t__ lsn; scalar_t__ lid; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 struct metapage* FUNC_1 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline struct metapage *FUNC_2(gfp_t VAR_1)
{
 struct metapage *VAR_2 = FUNC_1(VAR_0, VAR_1);

 if (VAR_2) {
  VAR_2->lid = 0;
  VAR_2->lsn = 0;
  VAR_2->data = ((void*)0);
  VAR_2->clsn = 0;
  VAR_2->log = ((void*)0);
  FUNC_0(&VAR_2->wait);
 }
 return VAR_2;
}
