
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f_midi {int * card; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct f_midi *VAR_0)
{
 if (VAR_0->card) {
  FUNC_0(VAR_0->card);
  VAR_0->card = ((void*)0);
 }
}
