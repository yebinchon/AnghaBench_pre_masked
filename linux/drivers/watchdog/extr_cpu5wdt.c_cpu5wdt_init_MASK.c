
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int default_ticks; int timer; scalar_t__ queue; int stop; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (char*,scalar_t__,scalar_t__) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (scalar_t__,int ,int ) ;
 int VAR_8 ;
 int FUNC_8 (int *,int ,int ) ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static int FUNC_9(void)
{
 unsigned int VAR_10;
 int VAR_11;

 if (VAR_9)
  FUNC_3("port=0x%x, verbose=%i\n", VAR_7, VAR_9);

 FUNC_1(&VAR_4.stop);
 VAR_4.queue = 0;
 FUNC_8(&VAR_4.timer, VAR_6, 0);
 VAR_4.default_ticks = VAR_8;

 if (!FUNC_7(VAR_7, VAR_0, VAR_3)) {
  FUNC_4("request_region failed\n");
  VAR_11 = -VAR_2;
  goto no_port;
 }


 VAR_10 = FUNC_0(VAR_7 + VAR_1);
 VAR_10 = (VAR_10 >> 2) & 1;
 if (!VAR_10)
  FUNC_5("sorry, was my fault\n");

 VAR_11 = FUNC_2(&VAR_5);
 if (VAR_11 < 0) {
  FUNC_4("misc_register failed\n");
  goto no_misc;
 }


 FUNC_5("init success\n");
 return 0;

no_misc:
 FUNC_6(VAR_7, VAR_0);
no_port:
 return VAR_11;
}
