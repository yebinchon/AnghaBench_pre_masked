
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fmi {int curfreq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int,struct fmi*,int ) ;

__attribute__((used)) static void FUNC_2(struct fmi *VAR_3)
{
 VAR_3->curfreq = FUNC_0(VAR_3->curfreq, VAR_1, VAR_0);


 FUNC_1((VAR_3->curfreq / 800) * 800, VAR_3, VAR_2);
}
