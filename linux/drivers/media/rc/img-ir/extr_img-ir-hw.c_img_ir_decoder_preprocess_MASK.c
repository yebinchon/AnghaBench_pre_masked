
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct img_ir_decoder {int tolerance; int timings; int rtimings; int unit; scalar_t__ repeat; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct img_ir_decoder *VAR_0)
{

 if (!VAR_0->tolerance)
  VAR_0->tolerance = 10;

 VAR_0->tolerance = VAR_0->tolerance * 128 / 100;


 FUNC_1(&VAR_0->timings, VAR_0->unit);


 if (VAR_0->repeat) {
  FUNC_1(&VAR_0->rtimings, VAR_0->unit);
  FUNC_0(&VAR_0->rtimings, &VAR_0->timings);
 }
}
