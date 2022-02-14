
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int queue; } ;
struct av7110 {int * ipack; TYPE_1__ avout; int * kbuf; } ;
typedef unsigned long ssize_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const*,unsigned long,int *) ;
 int FUNC_1 (int,char*,struct av7110*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct av7110 *VAR_4, const u8 *VAR_5,
   unsigned long VAR_6, int VAR_7, int VAR_8)
{
 unsigned long VAR_9 = VAR_6, VAR_10;
 FUNC_1(2, "av7110:%p, \n", VAR_4);

 if (!VAR_4->kbuf[VAR_8])
  return -VAR_0;

 if (VAR_7 && !VAR_2)
  return -VAR_1;

 while (VAR_9 > 0) {
  if (!VAR_2) {
   if (VAR_7)
    return VAR_6 - VAR_9;
   if (FUNC_2(VAR_4->avout.queue,
           VAR_2))
    return VAR_6 - VAR_9;
  }
  VAR_10 = VAR_9;
  if (VAR_10 > VAR_3 * 2)
   VAR_10 = VAR_3 * 2;
  FUNC_0(VAR_5, VAR_10, &VAR_4->ipack[VAR_8]);
  VAR_9 -= VAR_10;
  VAR_5 += VAR_10;
 }
 return VAR_6 - VAR_9;
}
