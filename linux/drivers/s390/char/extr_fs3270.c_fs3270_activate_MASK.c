
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct raw3270_view {int dummy; } ;
struct fs3270 {scalar_t__ rdbuf_size; int active; TYPE_2__* init; TYPE_5__* rdbuf; } ;
struct TYPE_12__ {char** data; } ;
struct TYPE_10__ {scalar_t__ count; } ;
struct TYPE_11__ {int rc; int (* callback ) (TYPE_2__*,int *) ;scalar_t__ rescnt; TYPE_1__ ccw; } ;


 int VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_5__*) ;
 int FUNC_5 (struct raw3270_view*,TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int *) ;

__attribute__((used)) static int
FUNC_7(struct raw3270_view *VAR_4)
{
 struct fs3270 *VAR_5;
 char *VAR_6;
 int VAR_7;

 VAR_5 = (struct fs3270 *) VAR_4;


 if (!FUNC_2(VAR_5->init))
  return 0;

 if (VAR_5->rdbuf_size == 0) {

  FUNC_3(VAR_5->init, VAR_0);
  VAR_5->init->callback = FUNC_0;
 } else {

  FUNC_3(VAR_5->init, VAR_0);
  FUNC_4(VAR_5->init, VAR_5->rdbuf);
  VAR_5->init->ccw.count = VAR_5->rdbuf_size;
  VAR_6 = VAR_5->rdbuf->data[0];
  VAR_6[0] = VAR_3;
  VAR_6[1] = VAR_2;
  VAR_6[2] = VAR_6[6];
  VAR_6[3] = VAR_6[7];
  VAR_6[4] = VAR_1;
  VAR_6[5] = VAR_2;
  VAR_6[6] = 0x40;
  VAR_6[7] = 0x40;
  VAR_5->init->rescnt = 0;
  VAR_5->init->callback = FUNC_1;
 }
 VAR_7 = VAR_5->init->rc = FUNC_5(VAR_4, VAR_5->init);
 if (VAR_7)
  VAR_5->init->callback(VAR_5->init, ((void*)0));
 else
  VAR_5->active = 1;
 return VAR_7;
}
