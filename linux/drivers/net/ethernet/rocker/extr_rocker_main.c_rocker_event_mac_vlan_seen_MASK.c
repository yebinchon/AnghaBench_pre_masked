
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_tlv {int dummy; } ;
struct rocker_port {int dummy; } ;
struct rocker {unsigned int port_count; struct rocker_port** ports; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 unsigned char* FUNC_0 (struct rocker_tlv const*) ;
 int FUNC_1 (struct rocker_tlv const*) ;
 int FUNC_2 (struct rocker_tlv const*) ;
 int FUNC_3 (struct rocker_tlv const**,int ,struct rocker_tlv const*) ;
 int FUNC_4 (struct rocker_port*,unsigned char const*,int ) ;

__attribute__((used)) static int FUNC_5(const struct rocker *VAR_6,
          const struct rocker_tlv *VAR_7)
{
 const struct rocker_tlv *VAR_8[VAR_3 + 1];
 unsigned int VAR_9;
 struct rocker_port *VAR_10;
 const unsigned char *VAR_11;
 __be16 VAR_12;

 FUNC_3(VAR_8, VAR_3, VAR_7);
 if (!VAR_8[VAR_4] ||
     !VAR_8[VAR_2] ||
     !VAR_8[VAR_5])
  return -VAR_1;
 VAR_9 =
  FUNC_2(VAR_8[VAR_4]) - 1;
 VAR_11 = FUNC_0(VAR_8[VAR_2]);
 VAR_12 = FUNC_1(VAR_8[VAR_5]);

 if (VAR_9 >= VAR_6->port_count)
  return -VAR_0;

 VAR_10 = VAR_6->ports[VAR_9];
 return FUNC_4(VAR_10, VAR_11, VAR_12);
}
