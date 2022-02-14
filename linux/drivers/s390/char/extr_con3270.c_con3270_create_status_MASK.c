
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cols; int rows; int ascebc; int dev; } ;
struct con3270 {TYPE_2__* status; TYPE_1__ view; int freemem; } ;
typedef int blueprint ;
struct TYPE_4__ {scalar_t__ string; } ;
 TYPE_2__* FUNC_0 (int *,int) ;
 int FUNC_1 (int ,scalar_t__,int) ;
 int FUNC_2 (scalar_t__,unsigned char const*,int) ;
 int FUNC_3 (int ,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_4(struct con3270 *VAR_0)
{
 static const unsigned char VAR_1[] =
  { 129, 0, 0, 128,132,130,133, 134,
    'c','o','n','s','o','l','e',' ','v','i','e','w',
    131,0,0,0,'R','u','n','n','i','n','g',128,132 };

 VAR_0->status = FUNC_0(&VAR_0->freemem, sizeof(VAR_1));

 FUNC_2(VAR_0->status->string, VAR_1, sizeof(VAR_1));

 FUNC_3(VAR_0->view.dev, VAR_0->status->string + 1,
          VAR_0->view.cols * (VAR_0->view.rows - 1));
 FUNC_3(VAR_0->view.dev, VAR_0->status->string + 21,
          VAR_0->view.cols * VAR_0->view.rows - 8);

 FUNC_1(VAR_0->view.ascebc, VAR_0->status->string + 8, 12);
 FUNC_1(VAR_0->view.ascebc, VAR_0->status->string + 24, 7);
}
