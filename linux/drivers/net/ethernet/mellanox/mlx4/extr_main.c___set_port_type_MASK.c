
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_priv {int port_mutex; TYPE_2__* port; } ;
struct mlx4_port_info {size_t port; int tmp_type; struct mlx4_dev* dev; } ;
struct TYPE_3__ {int* supported_type; int* possible_type; int num_ports; int* port_type; int flags; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
typedef enum mlx4_port_type { ____Placeholder_mlx4_port_type } mlx4_port_type ;
struct TYPE_4__ {int tmp_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mlx4_dev*,int*) ;
 int FUNC_1 (struct mlx4_dev*,int*) ;
 int FUNC_2 (struct mlx4_dev*,int*,int*) ;
 int FUNC_3 (struct mlx4_dev*,char*,...) ;
 struct mlx4_priv* FUNC_4 (struct mlx4_dev*) ;
 int FUNC_5 (struct mlx4_dev*) ;
 int FUNC_6 (struct mlx4_dev*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct mlx4_port_info *VAR_5,
      enum mlx4_port_type VAR_6)
{
 struct mlx4_dev *VAR_7 = VAR_5->dev;
 struct mlx4_priv *VAR_8 = FUNC_4(VAR_7);
 enum mlx4_port_type VAR_9[VAR_3];
 enum mlx4_port_type VAR_10[VAR_3];
 int VAR_11;
 int VAR_12 = 0;

 if ((VAR_6 & VAR_7->caps.supported_type[VAR_5->port]) != VAR_6) {
  FUNC_3(VAR_7,
    "Requested port type for port %d is not supported on this HCA\n",
    VAR_5->port);
  return -VAR_0;
 }

 FUNC_6(VAR_7);
 FUNC_7(&VAR_8->port_mutex);
 VAR_5->tmp_type = VAR_6;


 VAR_7->caps.possible_type[VAR_5->port] = VAR_5->tmp_type;

 for (VAR_11 = 0; VAR_11 < VAR_7->caps.num_ports; VAR_11++) {
  VAR_9[VAR_11] = VAR_8->port[VAR_11+1].tmp_type ? VAR_8->port[VAR_11+1].tmp_type :
     VAR_7->caps.possible_type[VAR_11+1];
  if (VAR_9[VAR_11] == VAR_4)
   VAR_9[VAR_11] = VAR_7->caps.port_type[VAR_11+1];
 }

 if (!(VAR_7->caps.flags & VAR_1) &&
     !(VAR_7->caps.flags & VAR_2)) {
  for (VAR_11 = 1; VAR_11 <= VAR_7->caps.num_ports; VAR_11++) {
   if (VAR_7->caps.possible_type[VAR_11] == VAR_4) {
    VAR_7->caps.possible_type[VAR_11] = VAR_7->caps.port_type[VAR_11];
    VAR_12 = -VAR_0;
   }
  }
 }
 if (VAR_12) {
  FUNC_3(VAR_7, "Auto sensing is not supported on this HCA. Set only 'eth' or 'ib' for both ports (should be the same)\n");
  goto out;
 }

 FUNC_2(VAR_7, VAR_10, VAR_9);

 VAR_12 = FUNC_1(VAR_7, VAR_10);
 if (VAR_12)
  goto out;




 for (VAR_11 = 0; VAR_11 < VAR_7->caps.num_ports; VAR_11++)
  VAR_8->port[VAR_11 + 1].tmp_type = 0;

 VAR_12 = FUNC_0(VAR_7, VAR_10);

out:
 FUNC_5(VAR_7);
 FUNC_8(&VAR_8->port_mutex);

 return VAR_12;
}
