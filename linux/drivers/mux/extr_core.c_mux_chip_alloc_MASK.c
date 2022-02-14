
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mux_control {int idle_state; int cached_state; int lock; struct mux_chip* chip; } ;
struct TYPE_4__ {int of_node; struct device* parent; int * type; int * class; } ;
struct mux_chip {scalar_t__ id; unsigned int controllers; TYPE_1__ dev; struct mux_control* mux; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mux_chip* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,struct mux_chip*) ;
 int FUNC_3 (TYPE_1__*,char*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *,int ,int ,int ) ;
 int FUNC_6 (struct mux_chip*) ;
 struct mux_chip* FUNC_7 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *,int) ;

struct mux_chip *FUNC_10(struct device *VAR_8,
    unsigned int VAR_9, size_t VAR_10)
{
 struct mux_chip *VAR_11;
 int VAR_12;

 if (FUNC_1(!VAR_8 || !VAR_9))
  return FUNC_0(-VAR_0);

 VAR_11 = FUNC_7(sizeof(*VAR_11) +
      VAR_9 * sizeof(*VAR_11->mux) +
      VAR_10, VAR_2);
 if (!VAR_11)
  return FUNC_0(-VAR_1);

 VAR_11->mux = (struct mux_control *)(VAR_11 + 1);
 VAR_11->dev.class = &VAR_5;
 VAR_11->dev.type = &VAR_7;
 VAR_11->dev.parent = VAR_8;
 VAR_11->dev.of_node = VAR_8->of_node;
 FUNC_2(&VAR_11->dev, VAR_11);

 VAR_11->id = FUNC_5(&VAR_6, 0, 0, VAR_2);
 if (VAR_11->id < 0) {
  int VAR_13 = VAR_11->id;

  FUNC_8("muxchipX failed to get a device id\n");
  FUNC_6(VAR_11);
  return FUNC_0(VAR_13);
 }
 FUNC_3(&VAR_11->dev, "muxchip%d", VAR_11->id);

 VAR_11->controllers = VAR_9;
 for (VAR_12 = 0; VAR_12 < VAR_9; ++VAR_12) {
  struct mux_control *VAR_14 = &VAR_11->mux[VAR_12];

  VAR_14->chip = VAR_11;
  FUNC_9(&VAR_14->lock, 1);
  VAR_14->cached_state = VAR_3;
  VAR_14->idle_state = VAR_4;
 }

 FUNC_4(&VAR_11->dev);

 return VAR_11;
}
