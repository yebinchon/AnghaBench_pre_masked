
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxser_board {int vector; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mxser_board*) ;
 scalar_t__ FUNC_1 (int ,int,char*) ;

__attribute__((used)) static int FUNC_2(struct mxser_board *VAR_1)
{
 if (FUNC_0(VAR_1))
  return 0;
 return FUNC_1(VAR_1->vector, 1, "mxser(vector)") ? 0 : -VAR_0;
}
