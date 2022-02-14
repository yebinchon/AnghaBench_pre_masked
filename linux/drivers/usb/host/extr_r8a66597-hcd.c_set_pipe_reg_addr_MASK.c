
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ pipenum; } ;
struct r8a66597_pipe {unsigned long fifoaddr; unsigned long fifosel; unsigned long fifoctr; int pipetrn; int pipetre; int pipectr; TYPE_1__ info; } ;


 unsigned long const VAR_0 ;
 unsigned long const VAR_1 ;
 unsigned long const VAR_2 ;
 unsigned long const VAR_3 ;
 unsigned long const VAR_4 ;
 unsigned long const VAR_5 ;
 unsigned long const VAR_6 ;
 unsigned long const VAR_7 ;
 unsigned long const VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct r8a66597_pipe *VAR_11, u8 VAR_12)
{
 u16 VAR_13 = VAR_11->info.pipenum;
 const unsigned long VAR_14[] = {VAR_3, VAR_6, VAR_0};
 const unsigned long VAR_15[] = {VAR_5, VAR_8, VAR_2};
 const unsigned long VAR_16[] = {VAR_4, VAR_7, VAR_1};

 if (VAR_12 > VAR_10)
  VAR_12 = VAR_10;

 VAR_11->fifoaddr = VAR_14[VAR_12];
 VAR_11->fifosel = VAR_15[VAR_12];
 VAR_11->fifoctr = VAR_16[VAR_12];

 if (VAR_13 == 0)
  VAR_11->pipectr = VAR_9;
 else
  VAR_11->pipectr = FUNC_1(VAR_13);

 if (FUNC_0(VAR_13)) {
  VAR_11->pipetre = FUNC_2(VAR_13);
  VAR_11->pipetrn = FUNC_3(VAR_13);
 } else {
  VAR_11->pipetre = 0;
  VAR_11->pipetrn = 0;
 }
}
