
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port100_frame {int datalen; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(void *VAR_1)
{
 struct port100_frame *VAR_2 = VAR_1;

 return sizeof(struct port100_frame) + FUNC_0(VAR_2->datalen) +
        VAR_0;
}
