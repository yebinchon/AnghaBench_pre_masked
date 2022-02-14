
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int wbuf ;
struct TYPE_6__ {int count; scalar_t__ cda; int flags; int cmd_code; } ;
struct TYPE_7__ {TYPE_1__ ccw; } ;
struct raw3270 {TYPE_2__ init_readpart; int init_view; int state; TYPE_2__ init_data; } ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,unsigned char const*,int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (int *,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_4(struct raw3270 *VAR_3)
{
 static const unsigned char VAR_4[] =
  { 0x00, 0x07, 0x01, 0xff, 0x03, 0x00, 0x81 };


 FUNC_2(&VAR_3->init_readpart, 0, sizeof(VAR_3->init_readpart));
 FUNC_2(&VAR_3->init_data, 0, sizeof(VAR_3->init_data));
 FUNC_1(&VAR_3->init_data, VAR_4, sizeof(VAR_4));
 VAR_3->init_readpart.ccw.cmd_code = VAR_2;
 VAR_3->init_readpart.ccw.flags = VAR_0;
 VAR_3->init_readpart.ccw.count = sizeof(VAR_4);
 VAR_3->init_readpart.ccw.cda = (__u32) FUNC_0(&VAR_3->init_data);
 VAR_3->state = VAR_1;
 FUNC_3(&VAR_3->init_view, &VAR_3->init_readpart);
}
