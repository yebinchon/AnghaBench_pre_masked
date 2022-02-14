
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_tlv {int dummy; } ;
struct rocker_port {int dev; } ;
struct rocker {unsigned int port_count; struct rocker_port** ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct rocker_port*) ;
 int FUNC_2 (struct rocker_port*) ;
 int FUNC_3 (struct rocker_tlv const*) ;
 int FUNC_4 (struct rocker_tlv const*) ;
 int FUNC_5 (struct rocker_tlv const**,int ,struct rocker_tlv const*) ;

__attribute__((used)) static int FUNC_6(const struct rocker *VAR_5,
        const struct rocker_tlv *VAR_6)
{
 const struct rocker_tlv *VAR_7[VAR_3 + 1];
 unsigned int VAR_8;
 bool VAR_9;
 struct rocker_port *VAR_10;

 FUNC_5(VAR_7, VAR_3, VAR_6);
 if (!VAR_7[VAR_4] ||
     !VAR_7[VAR_2])
  return -VAR_1;
 VAR_8 =
  FUNC_3(VAR_7[VAR_4]) - 1;
 VAR_9 = FUNC_4(VAR_7[VAR_2]);

 if (VAR_8 >= VAR_5->port_count)
  return -VAR_0;

 VAR_10 = VAR_5->ports[VAR_8];
 if (FUNC_0(VAR_10->dev) != VAR_9) {
  if (VAR_9)
   FUNC_2(VAR_10);
  else
   FUNC_1(VAR_10);
 }

 return 0;
}
