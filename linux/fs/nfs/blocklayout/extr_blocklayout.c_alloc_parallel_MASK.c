
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parallel_io {int refcnt; void* data; } ;


 int VAR_0 ;
 struct parallel_io* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline struct parallel_io *FUNC_2(void *VAR_1)
{
 struct parallel_io *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_0);
 if (VAR_2) {
  VAR_2->data = VAR_1;
  FUNC_1(&VAR_2->refcnt);
 }
 return VAR_2;
}
