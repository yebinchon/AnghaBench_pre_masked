
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_port {struct serdev_controller* client_data; } ;
struct serport {int flags; } ;
struct serdev_controller {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,char*,int,size_t) ;
 struct serport* FUNC_1 (struct serdev_controller*) ;
 int FUNC_2 (struct serdev_controller*,unsigned char const*,size_t) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct tty_port *VAR_1, const unsigned char *VAR_2,
    const unsigned char *VAR_3, size_t VAR_4)
{
 struct serdev_controller *VAR_5 = VAR_1->client_data;
 struct serport *VAR_6 = FUNC_1(VAR_5);
 int VAR_7;

 if (!FUNC_3(VAR_0, &VAR_6->flags))
  return 0;

 VAR_7 = FUNC_2(VAR_5, VAR_2, VAR_4);

 FUNC_0(&VAR_5->dev, VAR_7 < 0 || VAR_7 > VAR_4,
    "receive_buf returns %d (count = %zu)\n",
    VAR_7, VAR_4);
 if (VAR_7 < 0)
  return 0;
 else if (VAR_7 > VAR_4)
  return VAR_4;

 return VAR_7;
}
