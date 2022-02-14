
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timespec64 {int dummy; } ;
struct pps_generator_pp {long port_write_time; TYPE_2__* pardev; } ;
struct parport {TYPE_1__* ops; } ;
struct TYPE_4__ {struct parport* port; } ;
struct TYPE_3__ {int (* write_control ) (struct parport*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct timespec64*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (char*,long) ;
 int FUNC_4 (struct parport*,int ) ;
 struct timespec64 FUNC_5 (struct timespec64,struct timespec64) ;
 scalar_t__ FUNC_6 (struct timespec64*) ;

__attribute__((used)) static void FUNC_7(struct pps_generator_pp *VAR_2)
{
 struct parport *VAR_3 = VAR_2->pardev->port;
 int VAR_4;
 long VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < (1 << VAR_1); VAR_4++) {
  struct timespec64 VAR_6, VAR_7;
  unsigned long VAR_8;

  FUNC_2(VAR_8);
  FUNC_0(&VAR_6);
  VAR_3->ops->write_control(VAR_3, VAR_0);
  FUNC_0(&VAR_7);
  FUNC_1(VAR_8);

  VAR_7 = FUNC_5(VAR_7, VAR_6);
  VAR_5 += FUNC_6(&VAR_7);
 }

 VAR_2->port_write_time = VAR_5 >> VAR_1;
 FUNC_3("port write takes %ldns\n", VAR_2->port_write_time);
}
