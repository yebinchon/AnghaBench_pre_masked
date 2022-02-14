
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned short pipenum; } ;
struct r8a66597_pipe {TYPE_1__ info; int fifosel; } ;
struct r8a66597 {int dummy; } ;


 unsigned short VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct r8a66597*,int ) ;
 unsigned short FUNC_1 (struct r8a66597*) ;
 int FUNC_2 (struct r8a66597*,unsigned short,unsigned short,int ) ;
 int FUNC_3 (struct r8a66597*,int ,unsigned short,unsigned short) ;

__attribute__((used)) static inline void FUNC_4(struct r8a66597 *VAR_3,
      struct r8a66597_pipe *VAR_4)
{
 unsigned short VAR_5 = FUNC_1(VAR_3);

 FUNC_0(VAR_3, 0);
 FUNC_2(VAR_3, VAR_5 | 0, VAR_5 | VAR_0, VAR_1);
 FUNC_2(VAR_3, VAR_5 | 0, VAR_5 | VAR_0, VAR_2);

 FUNC_2(VAR_3, VAR_5 | VAR_4->info.pipenum, VAR_5 | VAR_0,
        VAR_4->fifosel);
 FUNC_3(VAR_3, VAR_4->fifosel, VAR_0, VAR_4->info.pipenum);
}
