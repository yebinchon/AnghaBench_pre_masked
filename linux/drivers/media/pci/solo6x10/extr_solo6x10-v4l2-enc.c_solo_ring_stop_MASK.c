
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct solo_dev {int * ring_thread; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct solo_dev*,int ) ;

__attribute__((used)) static void FUNC_2(struct solo_dev *VAR_1)
{
 if (VAR_1->ring_thread) {
  FUNC_0(VAR_1->ring_thread);
  VAR_1->ring_thread = ((void*)0);
 }

 FUNC_1(VAR_1, VAR_0);
}
