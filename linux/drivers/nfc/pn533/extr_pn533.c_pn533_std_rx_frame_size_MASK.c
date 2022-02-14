
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pn533_std_frame {int datalen; } ;
struct pn533_ext_frame {int datalen; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pn533_std_frame*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(void *VAR_1)
{
 struct pn533_std_frame *VAR_2 = VAR_1;


 if (FUNC_0(VAR_2)) {
  struct pn533_ext_frame *VAR_3 = VAR_1;

  return sizeof(struct pn533_ext_frame)
   + FUNC_1(VAR_3->datalen) + VAR_0;
 }

 return sizeof(struct pn533_std_frame) + VAR_2->datalen +
        VAR_0;
}
