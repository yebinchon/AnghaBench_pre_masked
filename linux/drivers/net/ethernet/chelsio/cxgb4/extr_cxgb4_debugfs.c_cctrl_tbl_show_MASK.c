
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct seq_file {struct adapter* private; } ;
struct TYPE_2__ {size_t* b_wnd; int * a_wnd; } ;
struct adapter {TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int **) ;
 int ** FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct seq_file*,char*,int,int ,int ,int ,int ,int ,int ,int ,int ,...) ;
 int FUNC_3 (struct adapter*,int **) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_4, void *VAR_5)
{
 static const char * const VAR_6[] = {
  "0.5", "0.5625", "0.625", "0.6875", "0.75", "0.8125", "0.875",
  "0.9375" };

 int VAR_7;
 u16 (*VAR_8)[VAR_2];
 struct adapter *VAR_9 = VAR_4->private;

 VAR_8 = FUNC_1(VAR_3, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 FUNC_3(VAR_9, VAR_8);

 for (VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7) {
  FUNC_2(VAR_4, "%2d: %4u %4u %4u %4u %4u %4u %4u %4u\n", VAR_7,
      VAR_8[0][VAR_7], VAR_8[1][VAR_7], VAR_8[2][VAR_7], VAR_8[3][VAR_7],
      VAR_8[4][VAR_7], VAR_8[5][VAR_7], VAR_8[6][VAR_7], VAR_8[7][VAR_7]);
  FUNC_2(VAR_4, "%8u %4u %4u %4u %4u %4u %4u %4u %5u %s\n",
      VAR_8[8][VAR_7], VAR_8[9][VAR_7], VAR_8[10][VAR_7], VAR_8[11][VAR_7],
      VAR_8[12][VAR_7], VAR_8[13][VAR_7], VAR_8[14][VAR_7], VAR_8[15][VAR_7],
      VAR_9->params.a_wnd[VAR_7],
      VAR_6[VAR_9->params.b_wnd[VAR_7]]);
 }

 FUNC_0(VAR_8);
 return 0;
}
